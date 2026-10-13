/* Entry 0x08929AFC | file offset 0x00126AD4 | FUN_08929afc | bytes 208 */

void FUN_08929afc(int param_1,short *param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  short *psVar5;
  undefined4 *puVar6;
  
  FUN_0892a13c();
  if (param_2 != (short *)0x0) {
    if (param_3 != 0) {
      uVar1 = FUN_0887b500(param_3,param_4,(int)*param_2);
      FUN_0892a198(param_1,uVar1);
    }
    FUN_0892a17c(param_1);
    FUN_08935524(param_1 + 0x1a,param_2 + 2,0x2a);
    param_2 = param_2 + 0x18;
    iVar2 = 0;
    iVar3 = 0x21;
    uVar1 = *(undefined4 *)param_2;
    psVar5 = param_2;
    puVar6 = (undefined4 *)(param_1 + 0x44);
    do {
      uVar4 = *(undefined4 *)(psVar5 + 2);
      *puVar6 = uVar1;
      iVar2 = iVar2 + 8;
      puVar6[1] = uVar4;
      psVar5 = (short *)((int)param_2 + iVar2);
      iVar3 = iVar3 + -1;
      uVar1 = *(undefined4 *)psVar5;
      puVar6 = (undefined4 *)(param_1 + 0x44 + iVar2);
    } while (iVar3 != 0);
    *puVar6 = uVar1;
  }
  return;
}

