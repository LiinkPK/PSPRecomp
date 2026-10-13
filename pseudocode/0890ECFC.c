/* Entry 0x0890ECFC | file offset 0x0010BCD4 | FUN_0890ecfc | bytes 520 */

void FUN_0890ecfc(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_110 [256];
  
  FUN_0893476c(auStack_110,"%s.bin",param_1);
  FUN_088fe7c8(auStack_110,0);
  uVar1 = FUN_0891118c(0x80000);
  uVar2 = FUN_088fe708(auStack_110,uVar1,0x80000,0);
  FUN_088fe944(auStack_110,uVar1,uVar2);
  FUN_0885c93c(uVar1);
  iVar3 = FUN_0885ca98(uVar1,1,0x65746167,0);
  if ((iVar3 != 0) && (*(int *)(iVar3 + 0xc) != 0)) {
    FUN_08910668(*(undefined4 *)(iVar3 + 8));
  }
  iVar3 = FUN_0885ca98(uVar1,1,0x67627467,0);
  if ((iVar3 != 0) && (*(int *)(iVar3 + 0xc) != 0)) {
    FUN_089107f0(*(undefined4 *)(iVar3 + 8));
  }
  iVar3 = FUN_0885ca98(uVar1,1,0x746e6970,0);
  if ((iVar3 != 0) && (*(int *)(iVar3 + 0xc) != 0)) {
    FUN_089123dc(*(undefined4 *)(iVar3 + 8));
  }
  iVar3 = FUN_0885ca98(uVar1,1,0x6b747266,0);
  if ((iVar3 != 0) && (*(int *)(iVar3 + 0xc) != 0)) {
    FUN_089103e0(*(undefined4 *)(iVar3 + 8));
  }
  FUN_089111c4(uVar1);
  return;
}

