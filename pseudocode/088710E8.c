/* Entry 0x088710E8 | file offset 0x0006E0C0 | FUN_088710e8 | bytes 216 */

void FUN_088710e8(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  if (DAT_089d5fd8 != 0) {
    uVar3 = DAT_089d5fd8 + 0x1fff;
    uVar1 = DAT_089d5fe0 + 0x3f;
    iVar2 = 1;
    if (0 < DAT_089d5fe0) {
      for (iVar2 = 2; iVar2 <= DAT_089d5fe0; iVar2 = iVar2 << 1) {
      }
    }
    iVar4 = 1;
    if (0 < DAT_089d5fe4) {
      for (iVar4 = 2; iVar4 <= DAT_089d5fe4; iVar4 = iVar4 << 1) {
      }
    }
    FUN_089a0fc8();
    FUN_089a0db8(1,0,0,0);
    FUN_089a0f04(0,iVar2,iVar4,uVar1 & 0xffffffc0,uVar3 & 0xffffe000);
  }
  return;
}

