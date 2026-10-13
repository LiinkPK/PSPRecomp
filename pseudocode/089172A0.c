/* Entry 0x089172A0 | file offset 0x00114278 | FUN_089172a0 | bytes 252 */

void FUN_089172a0(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_089d83d8;
  if ((*(int *)(*(int *)(DAT_089d83d8 + 0x744) + 8) != 0) && (iVar2 = FUN_088e0f14(), iVar2 == 0)) {
    FUN_088e01c4(*(undefined4 *)(iVar1 + 0x744),0);
    if ((*(char *)(iVar1 + 0x7de) == '\0') && (*(char *)(iVar1 + 0x7d6) == '\0')) {
      *(uint *)(*(int *)(iVar1 + 0x6d0) + 0x380) =
           *(uint *)(*(int *)(iVar1 + 0x6d0) + 0x380) & 0xfffffffd;
      FUN_08864db8();
    }
    FUN_08914b64(iVar1,2);
    if (-1 < *(int *)(iVar1 + 0x90)) {
      func_0x08a64054(*(undefined4 *)(*(int *)(iVar1 + *(int *)(iVar1 + 0x90) * 4 + 0x704) + 0x5c4),
                      0);
    }
    *(undefined1 *)(iVar1 + 0x7d7) = 1;
    *(undefined1 *)(iVar1 + 0x7d6) = 0;
    *(undefined1 *)(iVar1 + 0x7de) = 0;
    FUN_0885c538(*(undefined4 *)(iVar1 + 0x754),*(undefined4 *)(iVar1 + 0x748),0x40);
    *(undefined4 *)(iVar1 + 0x748) = 0;
    FUN_0885c538(*(undefined4 *)(iVar1 + 0x754),*(undefined4 *)(iVar1 + 0x74c),0x40);
    *(undefined4 *)(iVar1 + 0x74c) = 0;
    FUN_0885c488(*(undefined4 *)(iVar1 + 0x754));
    *(undefined4 *)(iVar1 + 0x754) = 0;
  }
  return;
}

