/* Entry 0x088FA2AC | file offset 0x000F7284 | FUN_088fa2ac | bytes 456 */

void FUN_088fa2ac(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,int param_7,int param_8,undefined4 uStackX_0,
                 undefined4 uStackX_4)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [4];
  undefined2 local_38;
  undefined2 local_34;
  int local_30;
  int local_2c;
  
  iVar2 = param_1 * 0x1060;
  puVar4 = &DAT_09afb8a0 + param_1 * 0x418;
  iVar5 = DAT_089d712c + 0xf6e0;
  local_30 = param_8;
  local_2c = param_7;
  FUN_088f8d34(puVar4);
  FUN_088b3b98(auStack_40,auStack_3c,puVar4,param_2,param_3,param_4,param_5,iVar5,param_6,uStackX_0,
               0);
  *(short *)(&DAT_09afc314 + iVar2) =
       (short)*(char *)((int)puVar4 + (char)(&DAT_09afc013)[iVar2] * 0xc6 + 0xca);
  (&DAT_09afc316)[iVar2] = 1;
  (&DAT_09afc317)[iVar2] = 1;
  (&DAT_09afc7d4)[param_1 * 0x830] = 1;
  *(undefined2 *)(&DAT_09afc7d6 + iVar2) = local_38;
  *(undefined2 *)(&DAT_09afc7d8 + iVar2) = local_34;
  uVar3 = FUN_088fb934(param_2,uStackX_4,0);
  cVar1 = (&DAT_09afc013)[iVar2];
  (&DAT_09afc7da)[param_1 * 0x830] = uVar3;
  (&DAT_09afc8f8)[iVar2] = (char)param_2;
  (&DAT_09afc8f9)[iVar2] = (char)uStackX_4;
  if (-1 < local_2c) {
    *(char *)((int)puVar4 + cVar1 * 0xc6 + 200) = (char)local_2c;
  }
  if (-1 < local_30) {
    *(char *)((int)puVar4 + cVar1 * 0xc6 + 0xc9) = (char)local_30;
  }
  uVar3 = FUN_088fb934((int)*(char *)((int)puVar4 + cVar1 * 0xc6 + 200),
                       (int)*(char *)((int)puVar4 + cVar1 * 0xc6 + 0xc9),1);
  (&DAT_09afc7de)[param_1 * 0x830] = uVar3;
  (&DAT_09afc8fa)[iVar2] = *(undefined1 *)((int)puVar4 + cVar1 * 0xc6 + 200);
  (&DAT_09afc8fb)[iVar2] = *(undefined1 *)((int)puVar4 + cVar1 * 0xc6 + 0xc9);
  return;
}

