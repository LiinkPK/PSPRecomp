/* Entry 0x088C2388 | file offset 0x000BF360 | FUN_088c2388 | bytes 164 */

bool FUN_088c2388(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar3 = *(undefined4 *)(param_5 + 4);
  iVar4 = DAT_089d712c + 0xf6e0;
  uVar2 = *(undefined4 *)(param_5 + 8);
  iVar1 = FUN_088c0f8c(uVar3);
  if (iVar1 != 0) {
    FUN_088b8cf8(iVar4,uVar3,uVar2);
    *(undefined4 *)(param_2 + 4) = uVar3;
    *(undefined4 *)(param_2 + 8) = uVar2;
    *(uint *)(DAT_089d726c + 4) = *(uint *)(DAT_089d726c + 4) | 0x400000;
  }
  return iVar1 != 0;
}

