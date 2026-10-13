/* Entry 0x089A0FC8 | file offset 0x0019DFA0 | FUN_089a0fc8 | bytes 32 */

void FUN_089a0fc8(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_09af6830;
  puVar2 = *(undefined4 **)(DAT_09af6830 + 8);
  *puVar2 = 0xcb000000;
  *(undefined4 **)(iVar1 + 8) = puVar2 + 1;
  return;
}

