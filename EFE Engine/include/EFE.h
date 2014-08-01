#ifndef EFE_EFE_H
#define EFE_EFE_H

#include "system/System.h"
#include "system/SystemTypes.h"
#include "system/String.h"
#include "system/LogicTimer.h"
#include "system/LowLevelSystem.h"
#include "system/Script.h"
#include "system/SerializeClass.h"
#include "system/Container.h"

#include "input/Input.h"
#include "input/InputDevice.h"
#include "input/Keyboard.h"
#include "input/Mouse.h"
#include "input/Action.h"
#include "input/ActionKeyboard.h"
#include "input/ActionMouseButton.h"
#include "input/LowLevelInput.h"

#include "game/Game.h"
#include "game/Updater.h"
#include "game/LowLevelGameSetup.h"
#include "game/Updateable.h"
#include "game/SaveGame.h"

#include "graphics/Graphics.h"
#include "graphics/Renderer3D.h"
#include "graphics/RenderList.h"
#include "graphics/MaterialHandler.h"
#include "graphics/MeshCreator.h"
#include "graphics/FontData.h"
#include "graphics/GraphicsDrawer.h"
#include "graphics/GfxObject.h"
#include "graphics/Texture.h"
#include "graphics/GPUProgram.h"
#include "graphics/VertexBuffer.h"
#include "graphics/Mesh.h"
#include "graphics/SubMesh.h"
#include "graphics/Skeleton.h"
#include "graphics/Bone.h"
#include "graphics/VideoStream.h"


#include "math/MathTypes.h"
#include "math/Math.h"
#include "math/BoundingVolume.h"
#include "math/Frustum.h"

#include "resources/Resources.h"
#include "resources/LowLevelResources.h"
#include "resources/FileSearcher.h"
#include "resources/ImageManager.h"
#include "resources/GpuProgramManager.h"
#include "resources/SoundManager.h"
#include "resources/FontManager.h"
#include "resources/ScriptManager.h"
#include "resources/TextureManager.h"
#include "resources/MaterialManager.h"
#include "resources/MeshManager.h"
#include "resources/MeshLoaderHandler.h"
#include "resources/SoundEntityManager.h"
#include "resources/VideoManager.h"
#include "resources/MeshLoader.h"
#include "resources/ConfigFile.h"

#include "scene/Scene.h"
#include "scene/Node2D.h"
#include "scene/GridMap2D.h"
#include "scene/Entity2D.h"
#include "scene/World3D.h"
#include "scene/Camera3D.h"
#include "scene/MeshEntity.h"
#include "scene/Node.h"
#include "scene/RenderableContainer.h"
#include "scene/MeshEntity.h"
#include "scene/Light3DPoint.h"
#include "scene/Light3DSpot.h"
#include "scene/PortalContainer.h"
#include "scene/SoundEntity.h"
#include "scene/SectorVisibility.h"

#include "sound/Sound.h"
#include "sound/SoundChannel.h"
#include "sound/SoundData.h"
#include "sound/SoundEnvironment.h"
#include "sound/SoundEntityData.h"
#include "sound/SoundHandler.h"
#include "sound/MusicHandler.h"
#include "sound/LowLevelSound.h"

#include "physics/CollideData2D.h"
#include "physics/Body2D.h"
#include "physics/Collider2D.h"
#include "physics/Physics.h"
#include "physics/PhysicsWorld.h"
#include "physics/PhysicsBody.h"
#include "physics/PhysicsMaterial.h"
#include "physics/CollideShape.h"
#include "physics/LowLevelPhysics.h"
#include "physics/CharacterBody.h"
#include "physics/PhysicsController.h"
#include "physics/PhysicsJoint.h"
#include "physics/PhysicsJointBall.h"
#include "physics/SurfaceData.h"

#include "ai/AI.h"
#include "ai/AINodeGenerator.h"

#include "gui/Gui.h"
#include "gui/GuiSet.h"
#include "gui/GuiSkin.h"
#include "gui/GuiMaterial.h"
#include "gui/GuiGfxElement.h"
#include "gui/GuiPopUp.h"
#include "gui/Widget.h"
#include "gui/WidgetWindow.h"
#include "gui/WidgetFrame.h"
#include "gui/WidgetButton.h"
#include "gui/WidgetLabel.h"
#include "gui/WidgetTextBox.h"
#include "gui/WidgetCheckBox.h"
#include "gui/WidgetImage.h"
#include "gui/WidgetListBox.h"
#include "gui/WidgetComboBox.h"

#include "haptic/Haptic.h"
#include "haptic/LowLevelHaptic.h"
#include "haptic/HapticShape.h"
#include "haptic/HapticForce.h"
#include "haptic/HapticSurface.h"

#include "impl/tinyXML/tinyxml.h"

#endif