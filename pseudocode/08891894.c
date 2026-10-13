/* Entry 0x08891894 | file offset 0x0008E86C | FUN_08891894 | bytes 108 */

undefined4 FUN_08891894(char *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*param_1 == '\0') {
    uVar1 = 0xffffffff;
  }
  else if ((param_2 == 0) || (param_3 < 0)) {
    uVar1 = 0xfffffffe;
  }
  else {
    iVar2 = FUN_08891ca4(param_1,param_2,*(undefined4 *)(param_1 + 4),param_3);
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 0xfffffffd;
    }
  }
  return uVar1;
}

