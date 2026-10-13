/* Entry 0x089907F8 | file offset 0x0018D7D0 | FUN_089907f8 | bytes 40 */

undefined4 FUN_089907f8(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_089da420 + param_1 * 0x10;
  *(undefined1 *)(iVar1 + 0x38) = 0;
  *(undefined4 *)(iVar1 + 0x3c) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x40) = 0;
  return *(undefined4 *)(iVar1 + 0x34);
}

