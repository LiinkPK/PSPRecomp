/* Entry 0x0890569C | file offset 0x00102674 | FUN_0890569c | bytes 140 */

undefined4 FUN_0890569c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_4 < 0xfff4) {
    iVar1 = sceNetAdhocPdpSend(*param_1,param_2,param_1[1] & 0xffff,param_3,param_4,3000000,0);
    if (iVar1 < 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

