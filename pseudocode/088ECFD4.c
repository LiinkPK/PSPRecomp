/* Entry 0x088ECFD4 | file offset 0x000E9FAC | FUN_088ecfd4 | bytes 288 */

undefined4 FUN_088ecfd4(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_088ecf48();
  if (DAT_089d7f00 == (char *)0x0) {
    uVar2 = 0;
  }
  else if (*DAT_089d7f00 == '\0') {
    if (param_1 < 0x264) {
      uVar2 = 0;
    }
    else if (param_2 < 2) {
      uVar2 = 0;
    }
    else if (param_3 < 2) {
      uVar2 = 0;
    }
    else {
      FUN_088ef658(param_1,param_2,param_3);
      iVar1 = sceMpegInit();
      if (iVar1 == 0) {
        iVar1 = FUN_089c1a00();
        if (iVar1 == 0) {
          iVar1 = FUN_089c1b30(0,0x800);
          if (iVar1 == 0) {
            uVar2 = 1;
            *DAT_089d7f00 = '\x01';
            DAT_089d7f00[1] = '\0';
            DAT_089d7f00[2] = '\0';
          }
          else {
            uVar2 = 0;
          }
        }
        else {
          uVar2 = 0;
        }
      }
      else {
        uVar2 = 0;
      }
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

