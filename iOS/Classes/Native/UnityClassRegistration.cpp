template <typename T> void RegisterClass(const char*);
template <typename T> void RegisterStrippedType(int, const char*, const char*);

void InvokeRegisterStaticallyLinkedModuleClasses()
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_AI();
	RegisterModule_AI();

	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_CloudWebServices();
	RegisterModule_CloudWebServices();

	void RegisterModule_Core();
	RegisterModule_Core();

	void RegisterModule_ParticleSystem();
	RegisterModule_ParticleSystem();

	void RegisterModule_PerformanceReporting();
	RegisterModule_PerformanceReporting();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_Terrain();
	RegisterModule_Terrain();

	void RegisterModule_TerrainPhysics();
	RegisterModule_TerrainPhysics();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_UnityAnalytics();
	RegisterModule_UnityAnalytics();

	void RegisterModule_UnityConnect();
	RegisterModule_UnityConnect();

	void RegisterModule_Wind();
	RegisterModule_Wind();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

	void RegisterModule_UnityWebRequest();
	RegisterModule_UnityWebRequest();

	void RegisterModule_GameCenter();
	RegisterModule_GameCenter();

	void RegisterModule_SharedInternals();
	RegisterModule_SharedInternals();

	void RegisterModule_JSONSerialize();
	RegisterModule_JSONSerialize();

	void RegisterModule_TLS();
	RegisterModule_TLS();

	void RegisterModule_ImageConversion();
	RegisterModule_ImageConversion();

}

class EditorExtension; template <> void RegisterClass<EditorExtension>(const char*);
namespace Unity { class Component; } template <> void RegisterClass<Unity::Component>(const char*);
class Behaviour; template <> void RegisterClass<Behaviour>(const char*);
class Animation; template <> void RegisterClass<Animation>(const char*);
class Animator; template <> void RegisterClass<Animator>(const char*);
class AudioBehaviour; template <> void RegisterClass<AudioBehaviour>(const char*);
class AudioListener; template <> void RegisterClass<AudioListener>(const char*);
class AudioSource; template <> void RegisterClass<AudioSource>(const char*);
class AudioFilter; 
class AudioChorusFilter; 
class AudioDistortionFilter; 
class AudioEchoFilter; 
class AudioHighPassFilter; 
class AudioLowPassFilter; 
class AudioReverbFilter; 
class AudioReverbZone; 
class Camera; template <> void RegisterClass<Camera>(const char*);
namespace UI { class Canvas; } template <> void RegisterClass<UI::Canvas>(const char*);
namespace UI { class CanvasGroup; } template <> void RegisterClass<UI::CanvasGroup>(const char*);
namespace Unity { class Cloth; } 
class Collider2D; 
class BoxCollider2D; 
class CapsuleCollider2D; 
class CircleCollider2D; 
class CompositeCollider2D; 
class EdgeCollider2D; 
class PolygonCollider2D; 
class TilemapCollider2D; 
class ConstantForce; 
class Effector2D; 
class AreaEffector2D; 
class BuoyancyEffector2D; 
class PlatformEffector2D; 
class PointEffector2D; 
class SurfaceEffector2D; 
class FlareLayer; template <> void RegisterClass<FlareLayer>(const char*);
class GUIElement; template <> void RegisterClass<GUIElement>(const char*);
namespace TextRenderingPrivate { class GUIText; } template <> void RegisterClass<TextRenderingPrivate::GUIText>(const char*);
class GUITexture; 
class GUILayer; template <> void RegisterClass<GUILayer>(const char*);
class GridLayout; 
class Grid; 
class Tilemap; 
class Halo; 
class HaloLayer; 
class IConstraint; 
class AimConstraint; 
class ParentConstraint; 
class PositionConstraint; 
class RotationConstraint; 
class ScaleConstraint; 
class Joint2D; 
class AnchoredJoint2D; 
class DistanceJoint2D; 
class FixedJoint2D; 
class FrictionJoint2D; 
class HingeJoint2D; 
class SliderJoint2D; 
class SpringJoint2D; 
class WheelJoint2D; 
class RelativeJoint2D; 
class TargetJoint2D; 
class LensFlare; 
class Light; template <> void RegisterClass<Light>(const char*);
class LightProbeGroup; 
class LightProbeProxyVolume; 
class MonoBehaviour; template <> void RegisterClass<MonoBehaviour>(const char*);
class NavMeshAgent; template <> void RegisterClass<NavMeshAgent>(const char*);
class NavMeshObstacle; 
class NetworkView; 
class OffMeshLink; 
class PhysicsUpdateBehaviour2D; 
class ConstantForce2D; 
class PlayableDirector; 
class Projector; 
class ReflectionProbe; 
class Skybox; template <> void RegisterClass<Skybox>(const char*);
class SortingGroup; 
class Terrain; template <> void RegisterClass<Terrain>(const char*);
class VideoPlayer; 
class WindZone; template <> void RegisterClass<WindZone>(const char*);
namespace UI { class CanvasRenderer; } template <> void RegisterClass<UI::CanvasRenderer>(const char*);
class Collider; template <> void RegisterClass<Collider>(const char*);
class BoxCollider; template <> void RegisterClass<BoxCollider>(const char*);
class CapsuleCollider; template <> void RegisterClass<CapsuleCollider>(const char*);
class CharacterController; template <> void RegisterClass<CharacterController>(const char*);
class MeshCollider; template <> void RegisterClass<MeshCollider>(const char*);
class SphereCollider; template <> void RegisterClass<SphereCollider>(const char*);
class TerrainCollider; template <> void RegisterClass<TerrainCollider>(const char*);
class WheelCollider; 
namespace Unity { class Joint; } template <> void RegisterClass<Unity::Joint>(const char*);
namespace Unity { class CharacterJoint; } 
namespace Unity { class ConfigurableJoint; } 
namespace Unity { class FixedJoint; } 
namespace Unity { class HingeJoint; } 
namespace Unity { class SpringJoint; } template <> void RegisterClass<Unity::SpringJoint>(const char*);
class LODGroup; 
class MeshFilter; template <> void RegisterClass<MeshFilter>(const char*);
class OcclusionArea; 
class OcclusionPortal; 
class ParticleAnimator; 
class ParticleEmitter; 
class EllipsoidParticleEmitter; 
class MeshParticleEmitter; 
class ParticleSystem; template <> void RegisterClass<ParticleSystem>(const char*);
class Renderer; template <> void RegisterClass<Renderer>(const char*);
class BillboardRenderer; 
class LineRenderer; 
class MeshRenderer; template <> void RegisterClass<MeshRenderer>(const char*);
class ParticleRenderer; 
class ParticleSystemRenderer; template <> void RegisterClass<ParticleSystemRenderer>(const char*);
class SkinnedMeshRenderer; template <> void RegisterClass<SkinnedMeshRenderer>(const char*);
class SpriteMask; 
class SpriteRenderer; template <> void RegisterClass<SpriteRenderer>(const char*);
class SpriteShapeRenderer; 
class TilemapRenderer; 
class TrailRenderer; template <> void RegisterClass<TrailRenderer>(const char*);
class Rigidbody; template <> void RegisterClass<Rigidbody>(const char*);
class Rigidbody2D; 
namespace TextRenderingPrivate { class TextMesh; } 
class Transform; template <> void RegisterClass<Transform>(const char*);
namespace UI { class RectTransform; } template <> void RegisterClass<UI::RectTransform>(const char*);
class Tree; 
class WorldAnchor; 
class WorldParticleCollider; 
class GameObject; template <> void RegisterClass<GameObject>(const char*);
class NamedObject; template <> void RegisterClass<NamedObject>(const char*);
class AssetBundle; 
class AssetBundleManifest; 
class ScriptedImporter; 
class AssetImporterLog; 
class AudioMixer; 
class AudioMixerController; 
class AudioMixerGroup; 
class AudioMixerGroupController; 
class AudioMixerSnapshot; 
class AudioMixerSnapshotController; 
class Avatar; template <> void RegisterClass<Avatar>(const char*);
class AvatarMask; 
class BillboardAsset; 
class ComputeShader; 
class Flare; 
namespace TextRendering { class Font; } template <> void RegisterClass<TextRendering::Font>(const char*);
class GameObjectRecorder; 
class LightProbes; template <> void RegisterClass<LightProbes>(const char*);
class Material; template <> void RegisterClass<Material>(const char*);
class ProceduralMaterial; 
class Mesh; template <> void RegisterClass<Mesh>(const char*);
class Motion; template <> void RegisterClass<Motion>(const char*);
class AnimationClip; template <> void RegisterClass<AnimationClip>(const char*);
class PreviewAnimationClip; 
class NavMeshData; template <> void RegisterClass<NavMeshData>(const char*);
class OcclusionCullingData; 
class PhysicMaterial; 
class PhysicsMaterial2D; 
class PreloadData; template <> void RegisterClass<PreloadData>(const char*);
class RuntimeAnimatorController; template <> void RegisterClass<RuntimeAnimatorController>(const char*);
class AnimatorController; template <> void RegisterClass<AnimatorController>(const char*);
class AnimatorOverrideController; template <> void RegisterClass<AnimatorOverrideController>(const char*);
class SampleClip; template <> void RegisterClass<SampleClip>(const char*);
class AudioClip; template <> void RegisterClass<AudioClip>(const char*);
class Shader; template <> void RegisterClass<Shader>(const char*);
class ShaderVariantCollection; 
class SpeedTreeWindAsset; 
class Sprite; template <> void RegisterClass<Sprite>(const char*);
class SpriteAtlas; 
class SubstanceArchive; 
class TerrainData; template <> void RegisterClass<TerrainData>(const char*);
class TextAsset; template <> void RegisterClass<TextAsset>(const char*);
class CGProgram; 
class MonoScript; template <> void RegisterClass<MonoScript>(const char*);
class Texture; template <> void RegisterClass<Texture>(const char*);
class BaseVideoTexture; 
class MovieTexture; 
class WebCamTexture; 
class CubemapArray; 
class LowerResBlitTexture; template <> void RegisterClass<LowerResBlitTexture>(const char*);
class ProceduralTexture; 
class RenderTexture; template <> void RegisterClass<RenderTexture>(const char*);
class CustomRenderTexture; 
class SparseTexture; 
class Texture2D; template <> void RegisterClass<Texture2D>(const char*);
class Cubemap; template <> void RegisterClass<Cubemap>(const char*);
class Texture2DArray; template <> void RegisterClass<Texture2DArray>(const char*);
class Texture3D; template <> void RegisterClass<Texture3D>(const char*);
class VideoClip; 
class GameManager; template <> void RegisterClass<GameManager>(const char*);
class GlobalGameManager; template <> void RegisterClass<GlobalGameManager>(const char*);
class AudioManager; template <> void RegisterClass<AudioManager>(const char*);
class BuildSettings; template <> void RegisterClass<BuildSettings>(const char*);
class CloudWebServicesManager; template <> void RegisterClass<CloudWebServicesManager>(const char*);
class CrashReportManager; 
class DelayedCallManager; template <> void RegisterClass<DelayedCallManager>(const char*);
class GraphicsSettings; template <> void RegisterClass<GraphicsSettings>(const char*);
class InputManager; template <> void RegisterClass<InputManager>(const char*);
class MasterServerInterface; template <> void RegisterClass<MasterServerInterface>(const char*);
class MonoManager; template <> void RegisterClass<MonoManager>(const char*);
class NavMeshProjectSettings; template <> void RegisterClass<NavMeshProjectSettings>(const char*);
class NetworkManager; template <> void RegisterClass<NetworkManager>(const char*);
class PerformanceReportingManager; template <> void RegisterClass<PerformanceReportingManager>(const char*);
class Physics2DSettings; 
class PhysicsManager; template <> void RegisterClass<PhysicsManager>(const char*);
class PlayerSettings; template <> void RegisterClass<PlayerSettings>(const char*);
class QualitySettings; template <> void RegisterClass<QualitySettings>(const char*);
class ResourceManager; template <> void RegisterClass<ResourceManager>(const char*);
class RuntimeInitializeOnLoadManager; template <> void RegisterClass<RuntimeInitializeOnLoadManager>(const char*);
class ScriptMapper; template <> void RegisterClass<ScriptMapper>(const char*);
class TagManager; template <> void RegisterClass<TagManager>(const char*);
class TimeManager; template <> void RegisterClass<TimeManager>(const char*);
class UnityAnalyticsManager; template <> void RegisterClass<UnityAnalyticsManager>(const char*);
class UnityConnectSettings; template <> void RegisterClass<UnityConnectSettings>(const char*);
class LevelGameManager; template <> void RegisterClass<LevelGameManager>(const char*);
class LightmapSettings; template <> void RegisterClass<LightmapSettings>(const char*);
class NavMeshSettings; template <> void RegisterClass<NavMeshSettings>(const char*);
class OcclusionCullingSettings; 
class RenderSettings; template <> void RegisterClass<RenderSettings>(const char*);
class RenderPassAttachment; 

void RegisterAllClasses()
{
void RegisterBuiltinTypes();
RegisterBuiltinTypes();
	//Total: 97 non stripped classes
	//0. AudioClip
	RegisterClass<AudioClip>("Audio");
	//1. SampleClip
	RegisterClass<SampleClip>("Audio");
	//2. NamedObject
	RegisterClass<NamedObject>("Core");
	//3. EditorExtension
	RegisterClass<EditorExtension>("Core");
	//4. AudioListener
	RegisterClass<AudioListener>("Audio");
	//5. AudioBehaviour
	RegisterClass<AudioBehaviour>("Audio");
	//6. Behaviour
	RegisterClass<Behaviour>("Core");
	//7. Unity::Component
	RegisterClass<Unity::Component>("Core");
	//8. AudioSource
	RegisterClass<AudioSource>("Audio");
	//9. Camera
	RegisterClass<Camera>("Core");
	//10. GameObject
	RegisterClass<GameObject>("Core");
	//11. GUIElement
	RegisterClass<GUIElement>("Core");
	//12. GUILayer
	RegisterClass<GUILayer>("Core");
	//13. Light
	RegisterClass<Light>("Core");
	//14. Shader
	RegisterClass<Shader>("Core");
	//15. Material
	RegisterClass<Material>("Core");
	//16. Sprite
	RegisterClass<Sprite>("Core");
	//17. Texture
	RegisterClass<Texture>("Core");
	//18. Texture2D
	RegisterClass<Texture2D>("Core");
	//19. RenderTexture
	RegisterClass<RenderTexture>("Core");
	//20. Transform
	RegisterClass<Transform>("Core");
	//21. UI::RectTransform
	RegisterClass<UI::RectTransform>("Core");
	//22. QualitySettings
	RegisterClass<QualitySettings>("Core");
	//23. GlobalGameManager
	RegisterClass<GlobalGameManager>("Core");
	//24. GameManager
	RegisterClass<GameManager>("Core");
	//25. Renderer
	RegisterClass<Renderer>("Core");
	//26. Skybox
	RegisterClass<Skybox>("Core");
	//27. Mesh
	RegisterClass<Mesh>("Core");
	//28. MonoBehaviour
	RegisterClass<MonoBehaviour>("Core");
	//29. Rigidbody
	RegisterClass<Rigidbody>("Physics");
	//30. Unity::Joint
	RegisterClass<Unity::Joint>("Physics");
	//31. Unity::SpringJoint
	RegisterClass<Unity::SpringJoint>("Physics");
	//32. Collider
	RegisterClass<Collider>("Physics");
	//33. CapsuleCollider
	RegisterClass<CapsuleCollider>("Physics");
	//34. CharacterController
	RegisterClass<CharacterController>("Physics");
	//35. NavMeshAgent
	RegisterClass<NavMeshAgent>("AI");
	//36. AnimationClip
	RegisterClass<AnimationClip>("Animation");
	//37. Motion
	RegisterClass<Motion>("Animation");
	//38. Animation
	RegisterClass<Animation>("Animation");
	//39. Animator
	RegisterClass<Animator>("Animation");
	//40. AnimatorOverrideController
	RegisterClass<AnimatorOverrideController>("Animation");
	//41. RuntimeAnimatorController
	RegisterClass<RuntimeAnimatorController>("Animation");
	//42. ParticleSystem
	RegisterClass<ParticleSystem>("ParticleSystem");
	//43. UI::Canvas
	RegisterClass<UI::Canvas>("UI");
	//44. UI::CanvasGroup
	RegisterClass<UI::CanvasGroup>("UI");
	//45. UI::CanvasRenderer
	RegisterClass<UI::CanvasRenderer>("UI");
	//46. TextRenderingPrivate::GUIText
	RegisterClass<TextRenderingPrivate::GUIText>("TextRendering");
	//47. TextRendering::Font
	RegisterClass<TextRendering::Font>("TextRendering");
	//48. Terrain
	RegisterClass<Terrain>("Terrain");
	//49. TerrainData
	RegisterClass<TerrainData>("Terrain");
	//50. SkinnedMeshRenderer
	RegisterClass<SkinnedMeshRenderer>("Core");
	//51. FlareLayer
	RegisterClass<FlareLayer>("Core");
	//52. PreloadData
	RegisterClass<PreloadData>("Core");
	//53. Cubemap
	RegisterClass<Cubemap>("Core");
	//54. Texture3D
	RegisterClass<Texture3D>("Core");
	//55. Texture2DArray
	RegisterClass<Texture2DArray>("Core");
	//56. MeshFilter
	RegisterClass<MeshFilter>("Core");
	//57. MeshRenderer
	RegisterClass<MeshRenderer>("Core");
	//58. LowerResBlitTexture
	RegisterClass<LowerResBlitTexture>("Core");
	//59. ParticleSystemRenderer
	RegisterClass<ParticleSystemRenderer>("ParticleSystem");
	//60. TagManager
	RegisterClass<TagManager>("Core");
	//61. GraphicsSettings
	RegisterClass<GraphicsSettings>("Core");
	//62. DelayedCallManager
	RegisterClass<DelayedCallManager>("Core");
	//63. InputManager
	RegisterClass<InputManager>("Core");
	//64. TimeManager
	RegisterClass<TimeManager>("Core");
	//65. BuildSettings
	RegisterClass<BuildSettings>("Core");
	//66. ResourceManager
	RegisterClass<ResourceManager>("Core");
	//67. RuntimeInitializeOnLoadManager
	RegisterClass<RuntimeInitializeOnLoadManager>("Core");
	//68. MasterServerInterface
	RegisterClass<MasterServerInterface>("Core");
	//69. NetworkManager
	RegisterClass<NetworkManager>("Core");
	//70. ScriptMapper
	RegisterClass<ScriptMapper>("Core");
	//71. PhysicsManager
	RegisterClass<PhysicsManager>("Physics");
	//72. MonoManager
	RegisterClass<MonoManager>("Core");
	//73. MonoScript
	RegisterClass<MonoScript>("Core");
	//74. TextAsset
	RegisterClass<TextAsset>("Core");
	//75. AudioManager
	RegisterClass<AudioManager>("Audio");
	//76. PlayerSettings
	RegisterClass<PlayerSettings>("Core");
	//77. NavMeshProjectSettings
	RegisterClass<NavMeshProjectSettings>("AI");
	//78. CloudWebServicesManager
	RegisterClass<CloudWebServicesManager>("CloudWebServices");
	//79. PerformanceReportingManager
	RegisterClass<PerformanceReportingManager>("PerformanceReporting");
	//80. UnityAnalyticsManager
	RegisterClass<UnityAnalyticsManager>("UnityAnalytics");
	//81. UnityConnectSettings
	RegisterClass<UnityConnectSettings>("UnityConnect");
	//82. TrailRenderer
	RegisterClass<TrailRenderer>("Core");
	//83. AnimatorController
	RegisterClass<AnimatorController>("Animation");
	//84. BoxCollider
	RegisterClass<BoxCollider>("Physics");
	//85. LightProbes
	RegisterClass<LightProbes>("Core");
	//86. RenderSettings
	RegisterClass<RenderSettings>("Core");
	//87. LevelGameManager
	RegisterClass<LevelGameManager>("Core");
	//88. LightmapSettings
	RegisterClass<LightmapSettings>("Core");
	//89. SpriteRenderer
	RegisterClass<SpriteRenderer>("Core");
	//90. MeshCollider
	RegisterClass<MeshCollider>("Physics");
	//91. WindZone
	RegisterClass<WindZone>("Wind");
	//92. Avatar
	RegisterClass<Avatar>("Animation");
	//93. TerrainCollider
	RegisterClass<TerrainCollider>("TerrainPhysics");
	//94. SphereCollider
	RegisterClass<SphereCollider>("Physics");
	//95. NavMeshSettings
	RegisterClass<NavMeshSettings>("AI");
	//96. NavMeshData
	RegisterClass<NavMeshData>("AI");

}
