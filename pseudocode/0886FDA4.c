/* Entry 0x0886FDA4 | file offset 0x0006CD7C | FUN_0886fda4 | bytes 376 */

undefined4 FUN_0886fda4(int *param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [24];
  int local_20;
  
  uVar3 = 0;
  if (((*param_1 != 0) && (iVar2 = FUN_0886fb98(*param_1), iVar2 != 0)) &&
     (*(undefined2 *)(iVar2 + 2) = 0, iVar2 != 0)) {
    local_20 = iVar2;
    FUN_08935828(iVar2 + 8,0,0x14);
    FUN_088706e8(&DAT_089c960e,&DAT_089c95fe,auStack_50,0x10);
    FUN_0885cde0(auStack_40);
    FUN_0885ce2c(auStack_40,auStack_50,0x10);
    FUN_0885d098(auStack_40,param_1[1],param_1[1],param_1[4] & 0xfffffff8);
    uVar1 = FUN_0886f9e4(param_1[1],param_1[4]);
    *(undefined2 *)(local_20 + 2) = uVar1;
    FUN_088706e8(&DAT_089c95fa,&DAT_089c9606,auStack_38,0x18);
    FUN_0886f0e4(auStack_38,0x18,param_1[1],param_1[4],iVar2 + 8);
    uVar3 = FUN_0886ff7c(param_1[2],param_1[3],param_1[1],param_1[4]);
    FUN_0885ce00(auStack_40,2);
  }
  if (param_1[6] != 0) {
    (*(code *)param_1[6])(uVar3,param_1[7]);
  }
  return uVar3;
}

