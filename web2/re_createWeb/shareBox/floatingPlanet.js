const textarea = document.getElementById('planet');
const log = document.getElementById('log');

function creatingPlanet(){
    let code="";
    code+="<video";
    code+=" autoplay=\"autoplay\" ";
    code+="loop>";
    code+="<source src=\"/shareBox/video/earth.mp4\">";
    code+="</source>"
    code+="<a href=\"/un-logged/login.html\">say 1</a><br><a href=\"/un-logged/register.html\">say 2</a>"
    code+="</video>";
    document.getElementById("planet").innerHTML=code;

}

function brighten(){

}

function darken(){

}

function move(event) {
    let shiftX = event.clientX - planet.getBoundingClientRect().left;
    let shiftY = event.clientY - planet.getBoundingClientRect().top;
    moveAt(event.pageX, event.pageY);
    function moveAt(pageX, pageY) {
      planet.style.left = pageX - shiftX + 'px';
      planet.style.top = pageY - shiftY + 'px';
    }
    function onMouseMove(event) {
      moveAt(event.pageX, event.pageY);
    }
    document.addEventListener('mousemove', onMouseMove);
    planet.onmouseup = function() {
      document.removeEventListener('mousemove', onMouseMove);
      planet.onmouseup = null;
    }
    return false;
  }
function start() {
    return false;
}