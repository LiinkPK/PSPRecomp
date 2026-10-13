/* Entry 0x088CDFBC | file offset 0x000CAF94 | FUN_088cdfbc | bytes 196 */

undefined4 FUN_088cdfbc(undefined1 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  FUN_088cdf80();
  if (param_2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    iVar1 = FUN_08869ab4(param_2,"replay_CO.gim");
    if (iVar1 == 0) {
      uVar3 = 0xfffffffe;
    }
    else {
      iVar2 = FUN_0899b9f0(0);
      *(int *)(param_1 + 4) = iVar2;
      if (iVar2 == 0) {
        uVar3 = 0xfffffffd;
      }
      else {
        FUN_0899bb68(iVar2,*(undefined4 *)(iVar1 + 4),*(undefined4 *)(iVar1 + 8),0);
        FUN_0888227c(DAT_089d69a8,0xffffffff,0x151e4,FUN_088ce0c0,&DAT_089cbd84);
        *param_1 = 1;
        uVar3 = 0;
      }
    }
  }
  return uVar3;
}

