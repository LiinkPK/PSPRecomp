/* Entry 0x08889BAC | file offset 0x00086B84 | FUN_08889bac | bytes 132 */

void FUN_08889bac(int param_1,undefined4 param_2,char param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_088720a4();
  FUN_08872304(uVar1);
  FUN_088c96e8(*(undefined4 *)(param_1 + 0x7c8),param_2);
  if (param_3 != '\0') {
    *(uint *)(*(int *)(param_1 + 0x7c8) + 0xbde8) =
         *(uint *)(*(int *)(param_1 + 0x7c8) + 0xbde8) | 2;
  }
  *(undefined4 *)(param_1 + 0x4c) = 9;
  return;
}

