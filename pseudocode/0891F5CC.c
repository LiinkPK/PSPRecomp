/* Entry 0x0891F5CC | file offset 0x0011C5A4 | FUN_0891f5cc | bytes 88 */

void FUN_0891f5cc(undefined2 *param_1)

{
  int iVar1;
  
  *param_1 = 0xffff;
  param_1[1] = 0xffff;
  param_1[2] = 0xffff;
  param_1[3] = 0xffff;
  param_1[5] = 0;
  param_1[6] = 0xffff;
  *(undefined4 *)(param_1 + 8) = 0;
  iVar1 = 0;
  param_1 = param_1 + 10;
  do {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)((int)param_1 + 1) = 0;
    *(undefined1 *)(param_1 + 1) = 0;
    *(undefined1 *)((int)param_1 + 3) = 0;
    param_1[2] = 0;
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 3;
  } while (iVar1 < 0x14);
  return;
}

