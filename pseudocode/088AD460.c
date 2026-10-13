/* Entry 0x088AD460 | file offset 0x000AA438 | FUN_088ad460 | bytes 164 */

void FUN_088ad460(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = FUN_0899b9f0(0);
  *(undefined4 *)(param_1 + 0xee4) = uVar1;
  iVar2 = FUN_0899bb68(uVar1,*(undefined4 *)(param_1 + 0xedc),*(undefined4 *)(param_1 + 0xed8),0);
  iVar3 = *(int *)(param_1 + 0xee4);
  if (iVar2 == 0) {
    FUN_0899bb1c();
    *(undefined4 *)(param_1 + 0xee4) = 0;
    iVar3 = 0;
  }
  if (iVar3 != 0) {
    *(undefined4 *)(param_1 + 0xee8) = 0;
    *(uint *)(param_1 + 0xef8) = *(uint *)(param_1 + 0xef8) | 0x100;
    uVar1 = FUN_08882274(DAT_089d69a8);
    uVar1 = FUN_088823c4(uVar1,0xffffffff,86000,FUN_088ad1e8,"SpecialDraw");
    *(undefined4 *)(param_1 + 0xf04) = uVar1;
  }
  return;
}

