struct ClassRegistrationContext;
void InvokeRegisterStaticallyLinkedModuleClasses(ClassRegistrationContext& context)
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_CloudWebServices();
	RegisterModule_CloudWebServices();

	void RegisterModule_ParticleSystem();
	RegisterModule_ParticleSystem();

	void RegisterModule_ParticlesLegacy();
	RegisterModule_ParticlesLegacy();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_UnityConnect();
	RegisterModule_UnityConnect();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

	void RegisterModule_JSONSerialize();
	RegisterModule_JSONSerialize();

	void RegisterModule_UnityWebRequest();
	RegisterModule_UnityWebRequest();

}

void RegisterAllClasses()
{
	//Total: 82 classes
	//0. RenderSettings
	void RegisterClass_RenderSettings();
	RegisterClass_RenderSettings();

	//1. LevelGameManager
	void RegisterClass_LevelGameManager();
	RegisterClass_LevelGameManager();

	//2. GameManager
	void RegisterClass_GameManager();
	RegisterClass_GameManager();

	//3. QualitySettings
	void RegisterClass_QualitySettings();
	RegisterClass_QualitySettings();

	//4. GlobalGameManager
	void RegisterClass_GlobalGameManager();
	RegisterClass_GlobalGameManager();

	//5. Renderer
	void RegisterClass_Renderer();
	RegisterClass_Renderer();

	//6. Component
	void RegisterClass_Component();
	RegisterClass_Component();

	//7. EditorExtension
	void RegisterClass_EditorExtension();
	RegisterClass_EditorExtension();

	//8. Skybox
	void RegisterClass_Skybox();
	RegisterClass_Skybox();

	//9. Behaviour
	void RegisterClass_Behaviour();
	RegisterClass_Behaviour();

	//10. GUILayer
	void RegisterClass_GUILayer();
	RegisterClass_GUILayer();

	//11. Texture
	void RegisterClass_Texture();
	RegisterClass_Texture();

	//12. NamedObject
	void RegisterClass_NamedObject();
	RegisterClass_NamedObject();

	//13. Texture2D
	void RegisterClass_Texture2D();
	RegisterClass_Texture2D();

	//14. Texture3D
	void RegisterClass_Texture3D();
	RegisterClass_Texture3D();

	//15. RenderTexture
	void RegisterClass_RenderTexture();
	RegisterClass_RenderTexture();

	//16. Mesh
	void RegisterClass_Mesh();
	RegisterClass_Mesh();

	//17. RectTransform
	void RegisterClass_RectTransform();
	RegisterClass_RectTransform();

	//18. Transform
	void RegisterClass_Transform();
	RegisterClass_Transform();

	//19. TextAsset
	void RegisterClass_TextAsset();
	RegisterClass_TextAsset();

	//20. Shader
	void RegisterClass_Shader();
	RegisterClass_Shader();

	//21. Material
	void RegisterClass_Material();
	RegisterClass_Material();

	//22. Sprite
	void RegisterClass_Sprite();
	RegisterClass_Sprite();

	//23. Camera
	void RegisterClass_Camera();
	RegisterClass_Camera();

	//24. MonoBehaviour
	void RegisterClass_MonoBehaviour();
	RegisterClass_MonoBehaviour();

	//25. Light
	void RegisterClass_Light();
	RegisterClass_Light();

	//26. GameObject
	void RegisterClass_GameObject();
	RegisterClass_GameObject();

	//27. ParticleSystem
	void RegisterClass_ParticleSystem();
	RegisterClass_ParticleSystem();

	//28. Rigidbody
	void RegisterClass_Rigidbody();
	RegisterClass_Rigidbody();

	//29. Joint
	void RegisterClass_Joint();
	RegisterClass_Joint();

	//30. SpringJoint
	void RegisterClass_SpringJoint();
	RegisterClass_SpringJoint();

	//31. Collider
	void RegisterClass_Collider();
	RegisterClass_Collider();

	//32. SphereCollider
	void RegisterClass_SphereCollider();
	RegisterClass_SphereCollider();

	//33. WheelCollider
	void RegisterClass_WheelCollider();
	RegisterClass_WheelCollider();

	//34. Rigidbody2D
	void RegisterClass_Rigidbody2D();
	RegisterClass_Rigidbody2D();

	//35. Collider2D
	void RegisterClass_Collider2D();
	RegisterClass_Collider2D();

	//36. AudioClip
	void RegisterClass_AudioClip();
	RegisterClass_AudioClip();

	//37. SampleClip
	void RegisterClass_SampleClip();
	RegisterClass_SampleClip();

	//38. AudioListener
	void RegisterClass_AudioListener();
	RegisterClass_AudioListener();

	//39. AudioBehaviour
	void RegisterClass_AudioBehaviour();
	RegisterClass_AudioBehaviour();

	//40. AudioSource
	void RegisterClass_AudioSource();
	RegisterClass_AudioSource();

	//41. Animation
	void RegisterClass_Animation();
	RegisterClass_Animation();

	//42. Animator
	void RegisterClass_Animator();
	RegisterClass_Animator();

	//43. DirectorPlayer
	void RegisterClass_DirectorPlayer();
	RegisterClass_DirectorPlayer();

	//44. GUIText
	void RegisterClass_GUIText();
	RegisterClass_GUIText();

	//45. GUIElement
	void RegisterClass_GUIElement();
	RegisterClass_GUIElement();

	//46. Font
	void RegisterClass_Font();
	RegisterClass_Font();

	//47. Canvas
	void RegisterClass_Canvas();
	RegisterClass_Canvas();

	//48. CanvasGroup
	void RegisterClass_CanvasGroup();
	RegisterClass_CanvasGroup();

	//49. CanvasRenderer
	void RegisterClass_CanvasRenderer();
	RegisterClass_CanvasRenderer();

	//50. SpriteRenderer
	void RegisterClass_SpriteRenderer();
	RegisterClass_SpriteRenderer();

	//51. RuntimeAnimatorController
	void RegisterClass_RuntimeAnimatorController();
	RegisterClass_RuntimeAnimatorController();

	//52. TrailRenderer
	void RegisterClass_TrailRenderer();
	RegisterClass_TrailRenderer();

	//53. ParticleRenderer
	void RegisterClass_ParticleRenderer();
	RegisterClass_ParticleRenderer();

	//54. ParticleSystemRenderer
	void RegisterClass_ParticleSystemRenderer();
	RegisterClass_ParticleSystemRenderer();

	//55. FlareLayer
	void RegisterClass_FlareLayer();
	RegisterClass_FlareLayer();

	//56. PreloadData
	void RegisterClass_PreloadData();
	RegisterClass_PreloadData();

	//57. Cubemap
	void RegisterClass_Cubemap();
	RegisterClass_Cubemap();

	//58. Texture2DArray
	void RegisterClass_Texture2DArray();
	RegisterClass_Texture2DArray();

	//59. TimeManager
	void RegisterClass_TimeManager();
	RegisterClass_TimeManager();

	//60. AudioManager
	void RegisterClass_AudioManager();
	RegisterClass_AudioManager();

	//61. InputManager
	void RegisterClass_InputManager();
	RegisterClass_InputManager();

	//62. Physics2DSettings
	void RegisterClass_Physics2DSettings();
	RegisterClass_Physics2DSettings();

	//63. MeshRenderer
	void RegisterClass_MeshRenderer();
	RegisterClass_MeshRenderer();

	//64. GraphicsSettings
	void RegisterClass_GraphicsSettings();
	RegisterClass_GraphicsSettings();

	//65. MeshFilter
	void RegisterClass_MeshFilter();
	RegisterClass_MeshFilter();

	//66. PhysicsManager
	void RegisterClass_PhysicsManager();
	RegisterClass_PhysicsManager();

	//67. MeshCollider
	void RegisterClass_MeshCollider();
	RegisterClass_MeshCollider();

	//68. BoxCollider
	void RegisterClass_BoxCollider();
	RegisterClass_BoxCollider();

	//69. TagManager
	void RegisterClass_TagManager();
	RegisterClass_TagManager();

	//70. ScriptMapper
	void RegisterClass_ScriptMapper();
	RegisterClass_ScriptMapper();

	//71. DelayedCallManager
	void RegisterClass_DelayedCallManager();
	RegisterClass_DelayedCallManager();

	//72. MonoScript
	void RegisterClass_MonoScript();
	RegisterClass_MonoScript();

	//73. MonoManager
	void RegisterClass_MonoManager();
	RegisterClass_MonoManager();

	//74. PlayerSettings
	void RegisterClass_PlayerSettings();
	RegisterClass_PlayerSettings();

	//75. BuildSettings
	void RegisterClass_BuildSettings();
	RegisterClass_BuildSettings();

	//76. ResourceManager
	void RegisterClass_ResourceManager();
	RegisterClass_ResourceManager();

	//77. LightmapSettings
	void RegisterClass_LightmapSettings();
	RegisterClass_LightmapSettings();

	//78. LightProbes
	void RegisterClass_LightProbes();
	RegisterClass_LightProbes();

	//79. RuntimeInitializeOnLoadManager
	void RegisterClass_RuntimeInitializeOnLoadManager();
	RegisterClass_RuntimeInitializeOnLoadManager();

	//80. CloudWebServicesManager
	void RegisterClass_CloudWebServicesManager();
	RegisterClass_CloudWebServicesManager();

	//81. UnityConnectSettings
	void RegisterClass_UnityConnectSettings();
	RegisterClass_UnityConnectSettings();

}
