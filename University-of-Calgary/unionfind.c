
<!-- saved from url=(0068)https://webdocs.cs.ualberta.ca/~contest/code/Data_Struct/unionfind.c -->
<html><head><meta http-equiv="Content-Type" content="text/html; charset=UTF-8"><style type="text/css">.dpmaxz_hidden {visibility: hidden;}#dpmaxz_root {-webkit-user-select: none; display: inline-block; z-index: 2147483647;margin: 0;padding: 0;}#dpmaxz_gui {-webkit-user-select: none; position: static; margin: 0;padding: 0;cursor: default;}#dpmaxz_root .dpmaxz_mainbkg {display: block;position: absolute;cursor: default;margin: -25px 0 0 -32px;width: 50px;height: 24px;background: transparent url(chrome-extension://ncffjdbbodifgldkcbhmiiljfcnbgjab/) no-repeat;}#dpmaxz_root .dpmaxz_mainbkg .dpmaxz_fbishield {float: left;margin: -10px 0 0 3px;padding: 0;width: 29px;height: 37px;background: transparent url(chrome-extension://ncffjdbbodifgldkcbhmiiljfcnbgjab/images/mainimg.png) no-repeat;}#dpmaxz_root .dpmaxz_mainbkg .dpmaxz_fbiauthok {background: transparent url(chrome-extension://ncffjdbbodifgldkcbhmiiljfcnbgjab/images/mainimg_ok.png) no-repeat;}#dpmaxz_root .dpmaxz_mainbkg .dpmaxz_fbiauthno {background: transparent url(chrome-extension://ncffjdbbodifgldkcbhmiiljfcnbgjab/images/mainimg_no.png) no-repeat;}#dpmaxz_root .dpmaxz_mainbkg .dpmaxz_fbixchg {background: transparent url(chrome-extension://ncffjdbbodifgldkcbhmiiljfcnbgjab/images/mainxchg.png) no-repeat;}#dpmaxz_root .dpmaxz_mainbkg .dpmaxz_menuact {background: transparent url(chrome-extension://ncffjdbbodifgldkcbhmiiljfcnbgjab/images/mainmact.png) no-repeat;}#dpmaxz_root .dpmaxz_mainbkg .dpmaxz_fbiadd {height: 16px;width: 15px;float: right;background: transparent url(chrome-extension://ncffjdbbodifgldkcbhmiiljfcnbgjab/images/mainadd.png) no-repeat;margin: 0 -16px 0 0;}#dpmaxz_gui .dpmaxz_menus {position: absolute; z-index: 2147483647; }.dpmaxz_menusrel {position: relative; }#dpmaxz_gui .dpmaxz_menus ul {position: absolute; left: 0;top: 22px; list-style: none;white-space: nowrap;border: 1px solid #a0a0a0;background-image: -webkit-linear-gradient(top, rgb(240,245,255) 73%, white 100%);box-shadow: 4px 4px 4px -3px #605F70;font-family: 'Segoe UI',Verdana,Arial;font-style: normal;font-size: 1em;padding: 3px 3px;margin: 2px 4px 2px 4px;}#dpmaxz_gui .dpmaxz_menus ul li {text-decoration: none;text-align: left;margin: 0; padding: 0;}#dpmaxz_gui .dpmaxz_menus ul li:hover {border: 1px solid #aecff7;-webkit-border-radius: 4px;background-color: #edf1f6;margin: -1px;}#dpmaxz_gui .dpmaxz_menus .dpmaxz_menurow {position: relative;color: black;height: 22px;float: none; }#dpmaxz_gui .dpmaxz_menus .dpmaxz_menurow span {display: inline-block !important;  }#dpmaxz_gui .dpmaxz_menus .dpmaxz_menurowicon {display: inline-block;width: 26px;height: 22px;position: relative;vertical-align: top;border-right: 1px solid #e2e3e3;font-size: 12px; color: black; }#dpmaxz_gui .dpmaxz_menus .dpmaxz_menurowtext {display: inline-block;border-left: 1px solid #ffffff;padding: 0 4px;font: normal 1em 'Segoe UI',Verdana,Arial; font-size: 12px;height: 22px;vertical-align: middle;}.dpmaxz_highlight {-webkit-border-image: url(chrome-extension://ncffjdbbodifgldkcbhmiiljfcnbgjab/images/highlighter.png) 5 9 8 6 repeat;border-image: url(chrome-extension://ncffjdbbodifgldkcbhmiiljfcnbgjab/images/highlighter.png) 5 9 8 6 repeat;}</style><script type="text/javascript" src="chrome-extension://bfbmjmiodbnnpllbbbfblcplfjjepjdn/js/injected.js"></script><style type="text/css"></style><style>[touch-action="none"]{ -ms-touch-action: none; touch-action: none; }[touch-action="pan-x"]{ -ms-touch-action: pan-x; touch-action: pan-x; }[touch-action="pan-y"]{ -ms-touch-action: pan-y; touch-action: pan-y; }[touch-action="scroll"],[touch-action="pan-x pan-y"],[touch-action="pan-y pan-x"]{ -ms-touch-action: pan-x pan-y; touch-action: pan-x pan-y; }</style><script>window["_GOOG_TRANS_EXT_VER"] = "1";</script></head><body><pre style="word-wrap: break-word; white-space: pre-wrap;">/* Data Structures: Unionfind with array
   =================================================================
   Description: Unionfind is a way to implement the union operator
                on sets.  It consists of 2 functions:
		  getRoot(x) which returns the identifier of a set
		  Union(a,b) which performs a union on the set 
		             containing a with the set containing b
   
   Complexity:  Union   - O(1)
                getRoot - O(roughly constant)
   -----------------------------------------------------------------
   Author:      Gilbert Lee
   Date:        Sept 21, 2002
   References:  
   -----------------------------------------------------------------
   Reliability: 
   Notes:       The array sets must be initialized to -1.  Negative
                numbers in the array represent the size of the set
		associated with that element, while positive numbers
		serve as a link back to the root of the set.
*/

#include &lt;stdio.h&gt;
#include &lt;string.h&gt;

#define MAXN 1000

int sets[MAXN];

int getRoot(int x){
  if(sets[x] &lt; 0) return x;
  return sets[x] = getRoot(sets[x]);
}

void Union(int a, int b){
  int ra = getRoot(a);
  int rb = getRoot(b);

  if(ra != rb){
    sets[ra] += sets[rb];
    sets[rb] = ra;
  }
}

int main(){
  int a, b, i, n, m;
  
  while(scanf("%d %d", &amp;n, &amp;m) == 2){
    memset(sets, -1, sizeof(sets));
    for(i = 0; i &lt; m; i++){
      scanf("%d %d", &amp;a, &amp;b);
      Union(a,b);
    }
    for(i = 0; i &lt; n; i++){
      printf("%d belongs in the set with [%d]\n", i, getRoot(i));
    }
  }
  return 0;
}
</pre></body></html>
