/* Entry 0x08870B10 | file offset 0x0006DAE8 | FUN_08870b10 | bytes 196 */

undefined4 FUN_08870b10(char *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if ((((*param_1 == 'm') && (param_1[1] == 'l')) && (param_1[2] == 'n')) && (param_1[3] == 'g')) {
    iVar2 = FUN_08867888();
    *param_2 = param_1 + *(int *)(param_1 + iVar2 * 4 + 8);
    iVar3 = *(int *)(param_1 + 4);
    iVar2 = FUN_08867888();
    uVar1 = 1;
    *param_3 = *(undefined4 *)(param_1 + (iVar3 + iVar2) * 4 + 8);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

