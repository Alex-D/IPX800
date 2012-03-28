package {
    import flash.display.Sprite;
    import flash.display.StageAlign;
    import flash.display.StageScaleMode;
    import flash.events.ActivityEvent;
    import flash.media.Camera;
    import flash.media.Video;

    public class Main extends Sprite {
        private var video:Video;
        
        public function Main() {
            stage.scaleMode = StageScaleMode.NO_SCALE;
            stage.align = StageAlign.TOP_LEFT;
            
            var camera:Camera = Camera.getCamera();
            
            if (camera != null) {
                camera.addEventListener(ActivityEvent.ACTIVITY, activityHandler);
                video = new Video(stage.stageWidth, stage.stageHeight);
				trace(stage.stageWidth);
                video.attachCamera(camera);
                addChild(video);
            }
        }
        
        private function activityHandler(event:ActivityEvent):void {
            trace("activityHandler: " + event);
        }
    }
}