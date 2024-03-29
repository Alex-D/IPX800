// this sets the background color of the master UIView (when there are no windows/tab groups on it)
Titanium.UI.setBackgroundColor('#666');

// create tab group
var tabGroup = Titanium.UI.createTabGroup();


//
// create base UI tab and root window
//
var win1 = Titanium.UI.createWindow({  
    title:'Webcam Control',
    backgroundColor:'#f3fbff'
});
var tab1 = Titanium.UI.createTab({  
    icon:'icons/cam.png',
    title:'Cam',
    window:win1
});

var label1 = Titanium.UI.createLabel({
	color:'#999',
	text:'I am Window 1',
	font:{fontSize:20,fontFamily:'Helvetica Neue'},
	textAlign:'center',
	width:'auto'
});
var basicSwitch = Titanium.UI.createSwitch({
    value:false
});
win1.add(label1);
win1.add(basicSwitch);

//
// create controls tab and root window
//
var win2 = Titanium.UI.createWindow({  
    title:'Borne',
    backgroundColor:'#f3fbff'
});
var tab2 = Titanium.UI.createTab({  
    icon:'icons/borne.png',
    title:'Borne',
    window:win2
});

var label2 = Titanium.UI.createLabel({
	color:'#999',
	text:'I am Window 2',
	font:{fontSize:20,fontFamily:'Helvetica Neue'},
	textAlign:'center',
	width:'auto'
});

win2.add(label2);


//
// create controls tab and root window
//
var win3 = Titanium.UI.createWindow({  
    title:'Global',
    backgroundColor:'#f3fbff'
});
var tab3 = Titanium.UI.createTab({  
    icon:'icons/global.png',
    title:'Global',
    window:win3
});

var label3 = Titanium.UI.createLabel({
    color:'#999',
    text:'I am Window 2',
    font:{fontSize:20,fontFamily:'Helvetica Neue'},
    textAlign:'center',
    width:'auto'
});

win3.add(label3);



//
//  add tabs
//
tabGroup.addTab(tab1);
tabGroup.addTab(tab2);
tabGroup.addTab(tab3);


// open tab group
tabGroup.open();