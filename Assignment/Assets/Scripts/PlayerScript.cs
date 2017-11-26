using UnityEngine;
using System.Collections;

public class PlayerScript : MonoBehaviour
{

	public float speed = 10f;
	Animator my_animator;
	Rigidbody2D rb;
	[Range(1, 20)]
	public float jumpVelocity;
	private bool isTouchingGround;
	public Transform groundCheckPoint;
	public float groundCheckRadius;
	public LayerMask groundLayer;
   


	void Start()
	{
		my_animator = GetComponent<Animator>();
		rb = GetComponent<Rigidbody2D>();
	}

	void Update()
	{
		isTouchingGround = Physics2D.OverlapCircle(groundCheckPoint.position, groundCheckRadius, groundLayer);
		float moveHorizontal = Input.GetAxis("Horizontal");
		transform.position += new Vector3(moveHorizontal, 0f, 0f) * Time.deltaTime * speed;

		if (Input.GetKeyDown(KeyCode.Space) && isTouchingGround)
		{
			my_animator.SetTrigger("IsJumping");
			rb.velocity = Vector2.up * jumpVelocity;
		}
		else if (moveHorizontal > 0)
		{
			my_animator.SetTrigger("IsWalking");
			transform.localScale = new Vector3(5f, 5f, 5f);

		}
		else if (moveHorizontal < 0)
		{
			my_animator.SetTrigger("IsWalking");
			transform.localScale = new Vector3(-5f, 5f, 5f);
		}

		else
		{
			my_animator.SetTrigger("IsIdle");
		}

	}
    void OnTriggerEnter2D(Collider2D other)
    {
        if (other.gameObject.CompareTag("redheartpickuptag"))
        {
            other.gameObject.SetActive(false);
        }

        if(other.gameObject.CompareTag("goldcoinpickuptag"))
        {
            other.gameObject.SetActive(false);
        }
    }

}

