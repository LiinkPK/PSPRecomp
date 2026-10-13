/* Entry 0x089010CC | file offset 0x000FE0A4 | FUN_089010cc | bytes 80 */

void FUN_089010cc(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = 0xffffffff;
  param_1[1] = 0xffffffff;
  param_1[2] = 0xffffffff;
  param_1[4] = 0;
  param_1[3] = 0xffffffff;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[0x10] = 0xffffffff;
  iVar1 = 0;
  do {
    *(undefined1 *)((int)param_1 + iVar1 + 0x44) = 1;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x23);
  return;
}

