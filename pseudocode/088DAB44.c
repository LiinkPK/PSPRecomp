/* Entry 0x088DAB44 | file offset 0x000D7B1C | FUN_088dab44 | bytes 56 */

void FUN_088dab44(int param_1)

{
  *(byte *)(param_1 + 0x14) = *(byte *)(param_1 + 0x14) & 0xfe;
  FUN_088cf314(DAT_089d7830,param_1,0);
  return;
}

