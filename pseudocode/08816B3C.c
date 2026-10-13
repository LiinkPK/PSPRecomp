/* Entry 0x08816B3C | file offset 0x00013B14 | FUN_08816b3c | bytes 108 */

undefined4
FUN_08816b3c(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*param_1 == '\0') {
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = FUN_0881b278(param_1 + 4,param_2,param_3,param_4,param_5);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = 0xfffffffe;
    }
  }
  return uVar2;
}

