/* Entry 0x0881BAF8 | file offset 0x00018AD0 | FUN_0881baf8 | bytes 252 */

undefined4
FUN_0881baf8(char *param_1,int param_2,undefined1 param_3,undefined4 param_4,undefined1 param_5,
            undefined4 param_6,undefined1 param_7)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  if (*param_1 == '\0') {
    uVar1 = 0xffffffff;
  }
  else if (param_1[8] == '\x01') {
    uVar1 = 0;
  }
  else {
    puVar2 = (undefined4 *)0x0;
    while( true ) {
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = *(undefined4 **)(param_1 + 0x110);
      }
      else {
        puVar2 = (undefined4 *)*puVar2;
      }
      if (puVar2 == (undefined4 *)0x0) break;
      if (*(short *)puVar2[0x12] == param_2) {
        FUN_08819624(puVar2,0,param_3,param_4,param_5,param_6,param_7);
      }
    }
    uVar1 = 0;
  }
  return uVar1;
}

