using UnityEngine;

public class PlayerScript : MonoBehaviour {
    
	public float speed = 10f;
	Animator my_animator;
	Rigidbody2D rb;
	[Range(1, 20)]
	public float jumpVelocity;
	bool isGrounded = true;

	void Start () {
		my_animator = GetComponent<Animator> ();
		rb = GetComponent<Rigidbody2D>();
	}

	void Update (){
		float moveHorizontal = Input.GetAxis ("Horizontal");
		transform.position += new Vector3 (moveHorizontal, 0f, 0f) * Time.deltaTime * speed;

		if(Input.GetKeyDown(KeyCode.Space) && isGrounded){
			my_animator.SetTrigger ("IsJumping");
			rb.velocity = Vector2.up * jumpVelocity;
			isGrounded = false;
	}
		else if (moveHorizontal > 0) {
			my_animator.SetTrigger ("IsWalking");
			transform.localScale = new Vector3 (5f,5f,5f);
		
		}
		else if(moveHorizontal < 0){
			my_animator.SetTrigger ("IsWalking");
			transform.localScale = new Vector3 (-5f,5f,5f);
		} 

		else {
			my_animator.SetTrigger ("IsIdle");
		}

	}

	void OnCollisionEnter2D(Collision2D other){
		if (other.collider.CompareTag ("Ground")) {
			isGrounded = true;


		}
	}
}