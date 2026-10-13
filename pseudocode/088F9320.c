/* Entry 0x088F9320 | file offset 0x000F62F8 | FUN_088f9320 | bytes 104 */

void FUN_088f9320(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  
  iVar3 = 0;
  iVar1 = DAT_089d712c + 0x1df88;
  iVar2 = param_1;
  do {
    *(undefined4 *)(iVar2 + 0xd34) = 0;
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 4;
  } while (iVar3 < 0x80);
  iVar3 = 0;
  iVar2 = 0x40;
  do {
    puVar4 = (undefined4 *)(iVar1 + iVar3);
    uVar5 = puVar4[1];
    puVar6 = (undefined4 *)(param_1 + 0xd34 + iVar3);
    *puVar6 = *puVar4;
    puVar6[1] = uVar5;
    iVar2 = iVar2 + -1;
    iVar3 = iVar3 + 8;
  } while (iVar2 != 0);
  return;
}

