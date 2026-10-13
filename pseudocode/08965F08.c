/* Entry 0x08965F08 | file offset 0x00162EE0 | FUN_08965f08 | bytes 60 */

void FUN_08965f08(void)

{
  int iVar1;
  int *in_a3;
  
  iVar1 = *in_a3;
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 0x20) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0x20) + 8),3);
  }
  return;
}

