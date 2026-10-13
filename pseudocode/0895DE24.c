/* Entry 0x0895DE24 | file offset 0x0015ADFC | FUN_0895de24 | bytes 152 */

void FUN_0895de24(undefined4 param_1,int param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_2 + 0x4f);
  if (bVar1 == 0) {
    FUN_089a12a4(0,6,7,0,0);
  }
  else if (bVar1 < 2) {
    FUN_089a12a4(0,6,10,0,0xffffffff);
  }
  else if (bVar1 < 3) {
    FUN_089a12a4(2,6,10,0,0xffffffff);
  }
  return;
}

