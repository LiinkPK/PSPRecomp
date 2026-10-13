/* Entry 0x088A3324 | file offset 0x000A02FC | FUN_088a3324 | bytes 112 */

void FUN_088a3324(undefined4 param_1,undefined4 param_2,int param_3)

{
  FUN_0889f948(*(int *)(param_3 + 8) + 4);
  if ((*(uint *)(param_3 + 0xc) & 2) == 0) {
    FUN_0889f8d4(param_2,*(int *)(param_3 + 8) + 4,0);
    *(uint *)(param_3 + 0xc) = *(uint *)(param_3 + 0xc) | 2;
  }
  return;
}

