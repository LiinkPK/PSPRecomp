/* Entry 0x08872F08 | file offset 0x0006FEE0 | FUN_08872f08 | bytes 136 */

void FUN_08872f08(void)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  
  iVar1 = DAT_089d6008;
  FUN_08872cf0(DAT_089d6008);
  FUN_08872d88(iVar1);
  FUN_08872dec(iVar1);
  pcVar3 = *(code **)(*(int *)(iVar1 + 0x34) + 0xc);
  iVar2 = (*pcVar3)(iVar1 + *(short *)(*(int *)(iVar1 + 0x34) + 8),pcVar3,0x10000,0);
  if (iVar2 == 0) {
    *(uint *)(iVar1 + 0x264) = *(uint *)(iVar1 + 0x264) & 0xfffffffb;
  }
  else {
    *(uint *)(iVar1 + 0x264) = *(uint *)(iVar1 + 0x264) | 4;
  }
  return;
}

