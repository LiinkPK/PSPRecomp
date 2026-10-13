/* Entry 0x088ABD7C | file offset 0x000A8D54 | FUN_088abd7c | bytes 72 */

bool FUN_088abd7c(int param_1)

{
  bool bVar1;
  
  bVar1 = (*(uint *)(DAT_089d712c + 0x3f5fc) & 1) != 0;
  if (bVar1) {
    *(uint *)(param_1 + 0x3f5fc) = *(uint *)(param_1 + 0x3f5fc) & 0xfffffffe;
  }
  return bVar1;
}

