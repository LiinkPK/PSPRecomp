/* Entry 0x088BB88C | file offset 0x000B8864 | FUN_088bb88c | bytes 116 */

int FUN_088bb88c(undefined4 param_1)

{
  int iVar1;
  undefined1 auStack_20 [16];
  
  FUN_088bb760(auStack_20,param_1);
  iVar1 = FUN_088bb900(DAT_089d738c,DAT_089d738c + (uint)*(ushort *)(DAT_089d7388 + 8) * 0x10,
                       auStack_20);
  if (iVar1 == DAT_089d738c + (uint)*(ushort *)(DAT_089d7388 + 8) * 0x10) {
    iVar1 = 0;
  }
  return iVar1;
}

