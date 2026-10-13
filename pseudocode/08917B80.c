/* Entry 0x08917B80 | file offset 0x00114B58 | FUN_08917b80 | bytes 36 */

void FUN_08917b80(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = DAT_089d83d8;
  *(undefined4 *)(DAT_089d83d8 + 0x4c) = param_1;
  *(undefined4 *)(iVar1 + 0x54) = 0;
  *(undefined4 *)(iVar1 + 0x58) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x38) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x5c) = 0;
  return;
}

