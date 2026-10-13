/* Entry 0x088B0C08 | file offset 0x000ADBE0 | FUN_088b0c08 | bytes 164 */

void FUN_088b0c08(void)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_089d7260 + 0x14);
  *(undefined4 *)(iVar1 + 0x814) = 5;
  *(undefined4 *)(iVar1 + 0xdd4) = 0;
  *(undefined4 *)(iVar1 + 0xdac) = 7;
  FUN_088ade90(DAT_089d712c,iVar1 + 0x864,iVar1 + 0x2a94,0);
  FUN_088b0cc8(iVar1 + 0x864,iVar1 + 0x2a94);
  FUN_088adf28(DAT_089d712c,iVar1 + 0x8e4,0x13,0);
  FUN_088afb30(DAT_089d7260);
  return;
}

