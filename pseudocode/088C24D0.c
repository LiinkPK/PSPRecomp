/* Entry 0x088C24D0 | file offset 0x000BF4A8 | FUN_088c24d0 | bytes 144 */

bool FUN_088c24d0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = *(undefined4 *)(param_5 + 4);
  iVar3 = DAT_089d712c + 0xf6e0;
  iVar1 = FUN_088c6ca4(uVar2);
  if (iVar1 != 0) {
    FUN_088b8e58(iVar3,uVar2);
    *(undefined4 *)(param_2 + 4) = uVar2;
    *(uint *)(DAT_089d726c + 4) = *(uint *)(DAT_089d726c + 4) | 0x200000;
  }
  return iVar1 != 0;
}

