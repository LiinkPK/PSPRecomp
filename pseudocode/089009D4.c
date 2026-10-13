/* Entry 0x089009D4 | file offset 0x000FD9AC | FUN_089009d4 | bytes 108 */

void FUN_089009d4(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = 0xffffffff;
  param_1[1] = 0xffffffff;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[8] = 0;
  param_1[7] = param_1[7] & 0xfffffffe;
  iVar1 = 0;
  do {
    *(undefined1 *)((int)param_1 + iVar1 + 0x44) = 1;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x23);
  return;
}

