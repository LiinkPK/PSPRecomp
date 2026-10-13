/* Entry 0x088C242C | file offset 0x000BF404 | FUN_088c242c | bytes 164 */

bool FUN_088c242c(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar3 = *(undefined4 *)(param_5 + 4);
  iVar4 = DAT_089d712c + 0xf6e0;
  uVar2 = *(undefined4 *)(param_5 + 8);
  iVar1 = FUN_088b29d8(uVar3);
  if (iVar1 != 0) {
    FUN_088b8da8(iVar4,uVar3,uVar2);
    *(undefined4 *)(param_2 + 4) = uVar3;
    *(undefined4 *)(param_2 + 8) = uVar2;
    *(uint *)(DAT_089d726c + 4) = *(uint *)(DAT_089d726c + 4) | 0x1000000;
  }
  return iVar1 != 0;
}

