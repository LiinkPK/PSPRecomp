/* Entry 0x088916A4 | file offset 0x0008E67C | FUN_088916a4 | bytes 108 */

undefined4 FUN_088916a4(char *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*param_1 == '\0') {
    uVar2 = 0xffffffff;
  }
  else if (param_2 == 0) {
    uVar2 = 0xfffffffe;
  }
  else {
    iVar1 = FUN_08891c18(param_1,param_2,*(undefined4 *)(param_1 + 0x18));
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = 0xfffffffd;
    }
  }
  return uVar2;
}

