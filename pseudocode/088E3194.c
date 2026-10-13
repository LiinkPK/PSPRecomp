/* Entry 0x088E3194 | file offset 0x000E016C | FUN_088e3194 | bytes 112 */

void FUN_088e3194(int param_1,undefined4 param_2)

{
  if ((*(int *)(param_1 + 0x694) != 0) && (*(int *)(param_1 + 0x694) != 0)) {
    FUN_088dab44();
    *(undefined4 *)(param_1 + 0x694) = 0;
  }
  FUN_0885c538(param_2,*(undefined4 *)(param_1 + 0x698),0);
  *(undefined4 *)(param_1 + 0x698) = 0;
  FUN_0885c538(param_2,*(undefined4 *)(param_1 + 0x6a0),0);
  *(undefined4 *)(param_1 + 0x6a0) = 0;
  return;
}

