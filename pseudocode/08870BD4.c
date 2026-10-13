/* Entry 0x08870BD4 | file offset 0x0006DBAC | FUN_08870bd4 | bytes 192 */

undefined4 FUN_08870bd4(char *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((((*param_1 == 'm') && (param_1[1] == 'l')) && (param_1[2] == 'n')) && (param_1[3] == 'g')) {
    iVar2 = FUN_088f49b8();
    *param_2 = param_1 + *(int *)(param_1 + iVar2 * 4 + 8);
    uVar1 = 1;
    *param_3 = *(undefined4 *)(param_1 + (*(int *)(param_1 + 4) + iVar2) * 4 + 8);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

