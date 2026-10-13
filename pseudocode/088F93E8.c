/* Entry 0x088F93E8 | file offset 0x000F63C0 | FUN_088f93e8 | bytes 64 */

void FUN_088f93e8(undefined2 *param_1)

{
  int iVar1;
  
  *param_1 = 0xffff;
  *(undefined1 *)((int)param_1 + 3) = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  iVar1 = 0;
  do {
    param_1[2] = 0xffff;
    *(undefined1 *)(param_1 + 3) = 0;
    *(undefined1 *)((int)param_1 + 7) = 0;
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 2;
  } while (iVar1 < 5);
  return;
}

