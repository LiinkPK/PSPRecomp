/* Entry 0x088FBE60 | file offset 0x000F8E38 | FUN_088fbe60 | bytes 172 */

void FUN_088fbe60(int param_1)

{
  uint *puVar1;
  
  FUN_088d3f00(*(int *)(param_1 + 0x30) + 0x65c,*(int *)(param_1 + 0x30) + 0xa5c,&DAT_089ccfac);
  puVar1 = *(uint **)(param_1 + 0x30);
  if ((*puVar1 & 8) != 0) {
    FUN_088d44ec(puVar1 + 0x297,puVar1 + 0x3bc,&DAT_089ccfd4);
    puVar1 = *(uint **)(param_1 + 0x30);
  }
  if ((*(short *)(puVar1[0x2ab] + 0xc) == 8) && ((*(ushort *)(puVar1[0x2ab] + 0x20) & 0x20) != 0)) {
    FUN_088fbf8c(param_1);
    **(uint **)(param_1 + 0x30) = **(uint **)(param_1 + 0x30) & 0xfffffff7;
  }
  return;
}

