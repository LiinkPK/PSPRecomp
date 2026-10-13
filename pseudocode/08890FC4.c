/* Entry 0x08890FC4 | file offset 0x0008DF9C | FUN_08890fc4 | bytes 96 */

undefined4 FUN_08890fc4(char *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*param_1 == '\0') {
    uVar1 = 0xffffffff;
  }
  else if (param_2 < 0) {
    uVar1 = 0xfffffffe;
  }
  else {
    iVar2 = 0;
    do {
      if (*(int *)(param_1 + 0xc) < 0) {
        *(int *)(param_1 + 0xc) = param_2;
        break;
      }
      iVar2 = iVar2 + 1;
      param_1 = param_1 + 4;
    } while (iVar2 < 2);
    uVar1 = 0;
  }
  return uVar1;
}

