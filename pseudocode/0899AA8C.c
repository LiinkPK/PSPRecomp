/* Entry 0x0899AA8C | file offset 0x00197A64 | FUN_0899aa8c | bytes 408 */

undefined8 FUN_0899aa8c(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  
  uVar7 = FUN_08999d84();
  uVar3 = (undefined4)((ulonglong)uVar7 >> 0x20);
  uVar1 = (undefined4)uVar7;
  iVar2 = FUN_0899b240(uVar1,uVar3,0,0);
  iVar5 = 0;
  uVar6 = 0;
  if (-1 < iVar2) {
    uVar7 = FUN_0899a1f4(uVar1,uVar3,0,0x3df00000);
    uVar6 = FUN_0899b3d8((int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
    iVar5 = FUN_0899b2c8(0,uVar6,0,0);
    if (iVar5 < 1) {
      uVar7 = FUN_0899b304(uVar6 << 0x1f,uVar6 >> 1);
      uVar4 = (undefined4)((ulonglong)uVar7 >> 0x20);
      uVar7 = FUN_0899a118((int)uVar7,uVar4,(int)uVar7,uVar4);
    }
    else {
      uVar7 = FUN_0899b304(0,uVar6);
    }
    uVar7 = FUN_0899a180(uVar1,uVar3,(int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
    uVar3 = (undefined4)((ulonglong)uVar7 >> 0x20);
    uVar1 = (undefined4)uVar7;
    iVar5 = FUN_0899b240(uVar1,uVar3,0,0);
    if (iVar5 < 0) {
      uVar7 = FUN_0899a99c(uVar1,uVar3);
      iVar2 = FUN_0899b3d8((int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
      iVar5 = -iVar2;
      uVar6 = uVar6 - (iVar2 != 0);
    }
    else {
      iVar5 = FUN_0899b3d8(uVar1,uVar3);
    }
  }
  return CONCAT44(uVar6,iVar5);
}

