/* Entry 0x088341A4 | file offset 0x0003117C | FUN_088341a4 | bytes 164 */

void FUN_088341a4(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0x380);
  *(uint *)(param_1 + 0x380) = uVar2 & 0xfffffff7;
  *(uint *)(param_1 + 0x380) = uVar2 & 0xffffffb7;
  *(uint *)(param_1 + 0x380) = uVar2 & 0xffffff37;
  *(uint *)(param_1 + 0x380) = uVar2 & 0xfffffe37;
  *(uint *)(param_1 + 0x380) = uVar2 & 0xfffff637;
  *(uint *)(param_1 + 0x380) = uVar2 & 0xfffff237;
  *(uint *)(param_1 + 0x380) = uVar2 & 0xffffe237;
  iVar1 = FUN_0883739c(param_1);
  if (iVar1 == 1) {
    *(byte *)(param_1 + 0x5b7) = *(byte *)(param_1 + 0x5b7) & 0xbf;
  }
  return;
}

