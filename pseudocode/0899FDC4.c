/* Entry 0x0899FDC4 | file offset 0x0019CD9C | FUN_0899fdc4 | bytes 172 */

void FUN_0899fdc4(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  uVar1 = param_1;
  while( true ) {
    if ((uVar1 & 1) == 0) {
      FUN_089a12fc(DAT_09af6830,uVar2,0);
      DAT_09af682c = DAT_09af682c & ~(1 << (uVar2 & 0x1f));
    }
    else {
      FUN_089a12fc(DAT_09af6830,uVar2,1);
      DAT_09af682c = DAT_09af682c | 1 << (uVar2 & 0x1f);
    }
    uVar2 = uVar2 + 1;
    if (0x15 < (int)uVar2) break;
    uVar1 = param_1 >> (uVar2 & 0x1f);
  }
  return;
}

