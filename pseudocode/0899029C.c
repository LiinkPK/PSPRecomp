/* Entry 0x0899029C | file offset 0x0018D274 | FUN_0899029c | bytes 208 */

undefined4 FUN_0899029c(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  while ((*(int *)(DAT_089da420 + uVar4 * 4 + 8) == 0 ||
         (iVar1 = FUN_08992704(*(undefined4 *)(DAT_089da420 + uVar4 * 4 + 8),param_1), iVar1 == 0)))
  {
    uVar4 = uVar4 + 1;
    if (3 < uVar4) {
      return 0;
    }
  }
  iVar1 = *(int *)(DAT_089da420 + uVar4 * 4 + 8);
  iVar3 = *(int *)(iVar1 + 0x50);
  uVar2 = (**(code **)(iVar3 + 0x1c))(iVar1 + *(short *)(iVar3 + 0x18),param_1);
  return uVar2;
}

