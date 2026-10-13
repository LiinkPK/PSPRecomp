/* Entry 0x088FEC98 | file offset 0x000FBC70 | FUN_088fec98 | bytes 236 */

int FUN_088fec98(int param_1,char param_2)

{
  int iVar1;
  
  FUN_089a7de8();
  if (param_2 == '\0') {
    iVar1 = FUN_089a77c0(param_1,param_1 + 0x400,0,0);
    if (iVar1 < 0) {
      FUN_089aab08("DISSIDIA 012 FF",param_1 + 0x1ec);
    }
    else {
      iVar1 = FUN_089a78e0(param_1);
      if (iVar1 < 0) {
        FUN_089aab08("DISSIDIA 012 FF",param_1 + 0x1ec);
      }
      else {
        iVar1 = FUN_089a7ab0(param_1,0,0);
        if (iVar1 < 0) {
          FUN_089aab08("DISSIDIA 012 FF",param_1 + 0x1ec);
        }
        else {
          iVar1 = 0;
        }
      }
    }
  }
  else {
    FUN_089aab08("DISSIDIA 012 FF",param_1 + 0x1ec);
    iVar1 = 0;
  }
  return iVar1;
}

