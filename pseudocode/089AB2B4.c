/* Entry 0x089AB2B4 | file offset 0x001A828C | FUN_089ab2b4 | bytes 88 */

void FUN_089ab2b4(char *param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_3 != 0) {
    if (*param_1 == '\0') {
      iVar1 = 0;
      goto LAB_089ab2f8;
    }
    uVar3 = 1;
    pcVar2 = param_1;
    while( true ) {
      pcVar2 = pcVar2 + 1;
      if ((param_3 <= uVar3) || (*pcVar2 == '\0')) break;
      uVar3 = uVar3 + 1;
    }
  }
  iVar1 = -uVar3;
LAB_089ab2f8:
  FUN_089ab210(param_1 + uVar3,param_2,param_3 + iVar1);
  return;
}

